#include <iostream>
#include <memory>


struct Content {
	private: 
		std::string info;

	public: 
		Content(std::string l_info) : info(l_info){}
		void getInfo() {
			std::cout << info << std::endl;
		}
};

int main(int argc, char const *argv[]){
	
	std::unique_ptr<Content> c = std::make_unique<Content>("Message");
	c->getInfo();

	return 0;
}