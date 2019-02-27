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
	int partnum;
	
public:
	job() : base(), name(""), status(WAIT), partnum(0){};
	job(const int &s, const std::string &n, const int &p=0) : base(s), name(n), status(WAIT), partnum(p){};

	std::string getName() const { return name; };
	void setName(const std::string &n){ name = n; };

	state getStatus() const { return status; };
	void setStatus(const state &s){ status = s; };

	int getPartnum() const { return partnum; };
	void setPartnum(const int &p) { partnum = p; };
};

// partition class
class part : public base 
{
protected:
	int size;
	job *j;

public:
	part() : base(), j(nullptr){};
	part(const int &s) : base(s), j(nullptr){};

	void setJob(job *J){ j = J; };
	job getJob() const { return *j; };

	~part()
	{
		delete j;
		j = nullptr;
	}
};
