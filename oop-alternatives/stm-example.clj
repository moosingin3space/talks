;; Initial ID
(def id (ref 0))

(defn get-next-id 
  (dosync
    (let [new-id (inc (deref id))]
      (ref-set id new-id)
      new-id)))

;; Now, from multiple threads
(db-insert (new-id-object (get-next-id)))
