// in one file
namespace a {
	void doA() {
		...
	}
	// You know not to call here.
	namespace internal {
		void doB() { 
			...
		}
	}
}

// in another
#include "a.hpp"
namespace b {
	using a;
	a::doA() // works, because doA is exported
	a::doB() // you separated it, so no issues
}
