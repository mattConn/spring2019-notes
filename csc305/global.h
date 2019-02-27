#include <string>

enum state {WAIT, RUN};

// base class
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
class job: public base
{
	std::string name;
	state status;
	
public:
	job() : base(), name(""), status(WAIT){};
	job(const int &sz, const std::string &nm) : base(sz), name(nm), status(WAIT){};

	std::string getName() const { return name; };
	void setName(const std::string &n){ name = n; };

	state getStatus() const { return status; };
	void setStatus(const state &s){ status = s; };
};

// partition class
class part : public base 
{
	job *j;

public:
	part() : base(), j(nullptr){};
	part(const int &s) : base(s), j(nullptr){};

	void setJob(job *J){ j = J; };
	job *getJob() const { return j; };
};
