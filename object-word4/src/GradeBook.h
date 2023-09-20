
class GradeBook {
public:
	explicit GradeBook(std::string name):coursename(name){
	}
	explicit GradeBook():coursename(){
	}
	void set_coursename(std::string name) {
		coursename = name;
	}
	std::string get_coursename() const{
		return coursename;
	}
	void display_message() const{
		std::cout << get_coursename() << std::endl;
	}


private:
	std::string coursename;
};
