enum EncodingMethod { Object, Array, Literal };

interface JSONEncodable {
    EncodingMethod howTo();
}

// I can't call howTo on any currently existing class! Instead, I write a LOT
// of highly repetitive code like:

class JSONObject implements JSONEncodable {
    public EncodingMethod howTo() {
        return EncodingMethod.Object;
    }
}

// and so on
