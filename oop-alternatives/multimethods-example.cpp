enum PriceTag { Buy, Sell };

template<PriceTag T>
struct Price { double price; };

template<PriceTag T>
void adjustPrice(Price<T> price, double newPrice) {
    return; // Do nothing
}

template<>
void adjustPrice(Price<Sell> price, double newPrice) {
    price.price = newPrice;
}
