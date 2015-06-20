type HasPrice interface {
	GetPrice() float64
}
type AdjustablePrice interface {
	AdjustPrice(val float64)
}
type Price struct {
	price float64
}
type SellPrice Price
type BuyPrice Price

func (p Price) GetPrice() float64 {
	return p.price
}
func (p SellPrice) AdjustPrice(val float64) {
	p.price = val
}

market.GetPrice("good-A").AdjustPrice(5.00) // not applicable if GetPrice returns a BuyPrice
