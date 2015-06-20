var SellPrice = function(p) {
    var price = p;
    return {
        adjustPrice: function(p) {
            price = p;
        },
        getPrice: function() {
            return price;
        }
    };
};

var BuyPrice = function(p) {
    return {
        getPrice: function() {
            return p;
        }
    };
};

var p = getMarketPrice("good-A");
p.adjustPrice(5.00); // Will throw a ReferenceError if p is a BuyPrice
