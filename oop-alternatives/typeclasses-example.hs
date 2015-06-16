-- Start by defining
data JSON = Object | Array | Literal

class HowToEncodeJSON a where
    howto :: a -> JSON

instance HowToEncodeJSON [] where
    howto = Array

instance HowToEncodeJSON String where
    howto = Literal

instance HowToEncodeJSON Vector where
    howto = Array
