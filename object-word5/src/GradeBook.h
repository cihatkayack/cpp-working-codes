#include <string>

class GradeBook {
public:
	explicit GradeBook(std::string);
	explicit GradeBook();
	void set_coursename(std::string name);
	std::string get_coursename() const;
	void display_message() const;

private:
	std::string coursename;
};
