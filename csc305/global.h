#include <string>

enum state {WAIT, RUN};

// base class
// ==========
class base 
{
protected:
	int size;

public:
	base() : size(0){};
	base(const int &s) : size(s){};

	int getSize() const { return size; };
	void setSize(const int &s){ size = s; };
};

// job class
// =========
class job: public base
{
	int jobnum = 0;
	state status = WAIT;
	
public:
	job() : base(), jobnum(0){};
	job(const int &size, const int &n) : base(size), jobnum(n){};

	int getNum() const { return jobnum; };
	void setName(const int &n){ jobnum = n; };

	state getStatus() const { return status; };
	void setStatus(const state &s){ status = s; };
};

// partition class
// ===============
class part : public base 
{
	job *j;

public:
	part() : base(), j(nullptr){};
	part(const int &size) : base(size), j(nullptr){};

	void setJobPtr(job *J){ j = J; };
	job *getJobPtr() const { return j; };
};
