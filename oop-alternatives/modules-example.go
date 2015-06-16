// in one file
package a

func DoA() { // public functions start with caps
	...
}

func doB() { // module-private functions start with lowercase
	...
}

// in another
package b

import "a"

a.DoA() // works, because DoA is exported
a.doB() // compiler error!
