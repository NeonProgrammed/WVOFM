#include "WVOFM.h"

class Test : public WVOFM::App {
public:
	Test() {

	}

	~Test() {

	}
};

WVOFM::App* WVOFM::CreateApplication() {
	return new Test();
}