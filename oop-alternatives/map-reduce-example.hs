-- If I want the sum of a list
sum :: (Num a) => [a] -> a
sum list = foldr (+) list

-- What about a product?
product :: (Num a) => [a] -> a
product list = foldr (*) list

-- What about the sum of squares?
sumOfSquares :: (Num a) => [a] -> a
sumOfSquares list = foldr (+) (map (^2) list)
