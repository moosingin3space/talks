class Price {
    private:
        double price;

    public:
        void adjustPrice(double p);
        double getPrice();
}

class SellPrice : public Price {
    // Sellers set prices, so this definition makes sense
}

class BuyPrice : public Price {
    // Buyers can't directly adjust prices!
}

// to use these
Price *p = Market.getPrice("good-A");
p.adjustPrice(5.00); // Shouldn't be able to do this if p is a BuyPrice!
