type JSONType
const ( Object JSONType = iota, Array, Literal )

type JSONEncodable interface {
	HowTo() JSONType
}

func (s string) HowTo() JSONType {
	return Literal
}

// To make new types JSON-encodable

type MyType struct { ... }

func (m MyType) HowTo() JSONType {
	return Object
}
