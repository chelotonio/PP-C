#lang racket

(define (abs x)
  ( cond ( (< x 0) "HOLA")
         ( (= x 0) "WAU")
         ( (> x 0) "CHAO")))

(define sumita
  (lambda (entradita)
    (+ entradita 5)))