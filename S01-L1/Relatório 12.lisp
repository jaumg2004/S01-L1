;; Definindo a função que realiza a operação descrita
(defun processa-elemento (elemento)
  (if (>= elemento 4)
      (* elemento elemento)  ;; multiplica o elemento por ele mesmo
      (/ elemento 2)))       ;; divide o elemento por 2

;; Aplicando a função sobre as listas (1 2 3) e (4 5 6)
(setq lista1 '(1 2 3))
(setq lista2 '(4 5 6))

(setq resultado1 (mapcar #'processa-elemento lista1))
(setq resultado2 (mapcar #'processa-elemento lista2))

;; Juntando as duas listas processadas
(setq resultado-final (append resultado1 resultado2))

;; Mostrando o resultado
(print resultado-final)
