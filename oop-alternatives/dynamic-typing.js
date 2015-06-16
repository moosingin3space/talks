// This is infinitely flexible
var encodeJSON = function(object) {
    if (object.howTo() == 'object') {
        ...
    }
    ...
};

// If I want something JSON-encodable, I just do
var object = ...;
object.howTo = function() { return 'object'; }
