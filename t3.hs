ex 1 
heado :: [Int] -> [Int]
heado [] = []
heado (x:xs)=  x^2 : heado (xs)

ex 2 
sradd :: String -> [String]
sradd "" = [""]
sradd (x:xs) = "Sr." : x : sradd (xs)

ex 3
headoz :: [Float] -> [Float]
headoz [] = []
headoz (x:xs)=  (3*x^2 + 2/x + 1) : headoz (xs)





ex 5
heados :: [Int] -> [Int]
heados [] = []
heados (x:xs)= if x < 0
              then x:heados xs
              else heados xs
