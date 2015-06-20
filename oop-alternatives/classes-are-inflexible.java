class Price {
    private double price;

    public void adjustPrice(double p);
    public double getPrice();
}

class SellPrice extends Price {
    // Sellers set prices, so this definition makes sense
}

class BuyPrice extends Price {
    // Buyers can't directly adjust prices!
}

// to use these
Price p = Market.getPrice("good-A");
p.adjustPrice(5.00); // Shouldn't be able to do this if p is a BuyPrice!
