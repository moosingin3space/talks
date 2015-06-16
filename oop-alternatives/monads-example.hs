-- This same concept (monadic chaining)
main :: IO ()
main = getLine >>= putStrLn

-- can be applied here
paternalGrandmother :: Person -> Maybe Person
paternalGrandmother person = Just person >>= father >>= mother

-- and here
-- Predefined
fetch :: String -> Maybe ByteString
jsonToPerson :: ByteString -> Maybe Person

-- Defined by me
getPerson :: String -> Maybe Person
getPerson url = (fetch url) >>= jsonToPerson
