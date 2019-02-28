#include <string>

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
	
public:
	job() : base(), name(""){};
	job(const int &size, const std::string &nm) : base(size), name(nm){};

	std::string getName() const { return name; };
	void setName(const std::string &n){ name = n; };
};

// partition class
class part : public base 
{
	job *j;

public:
	part() : base(), j(nullptr){};
	part(const int &size) : base(size), j(nullptr){};

	void setJobPtr(job *J){ j = J; };
	job *getJobPtr() const { return j; };
};
