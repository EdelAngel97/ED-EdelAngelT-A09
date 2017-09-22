#include "NodeDL.h"
#include <string>

template <typename T> class NodeDL {
public:
	T data;
	NodeDL* next;
	NodeDL* back;

	NodeDL(T d) {
		data = d;
		next = nullptr;
		back = nullptr;
	}
};
