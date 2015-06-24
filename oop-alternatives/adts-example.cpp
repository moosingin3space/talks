struct Buy {
    const double price;
};
struct Sell {
    double price;
};
using Price = ftl::sum_type<Buy, Sell>;
void adjustPrice(Price p, double newPrice) {
    p.matchE(
            [](const Sell& x) {
                p.price = newPrice;
            },
            [](otherwise) {
                // Do nothing, this shouldn't happen
            });
}

adjustPrice(market::getPrice("good-A"), 5.00);
