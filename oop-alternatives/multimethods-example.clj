;; Start by defining tags
(derive ::buy-price ::price)
(derive ::sell-price ::price)

(defmulti adjust-price (fn [tag & rest] tag))

(defmethod adjust-price ::sell-price [tag value new-value]
  [::sell-price new-value])

(defmethod get-price ::price [tag value]
  value)

;; To use it
(adjust-price (get-market-price "good-A") 5.00)
