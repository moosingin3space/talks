data (Num a) => Price a = Buy a | Sell a

adjustPrice :: (Num a) => Price a -> a -> Price a
adjustPrice (Sell _) newPrice = Sell newPrice

getPrice :: (Num a) => Price a -> a
getPrice (Sell p) = p
getPrice (Buy p) = p

-- To use it
adjustPrice (getMarketPrice "good-A") 5.00 -- adjustPrice is only defined for Sell
