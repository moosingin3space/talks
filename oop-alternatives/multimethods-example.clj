;; Simple example
(defmulti type-of-json class)

(defmethod type-of-json Keyword
  :literal)

(defmethod type-of-json Vector
  :array)

;; If I want to add something later:

(deftype my-type)
(defmethod type-of-json my-type
  :object)
