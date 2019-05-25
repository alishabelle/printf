(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)

;; load dracula theme

(add-to-list 'custom-theme-load-path "~/.emacs.d/themes")
(load-theme 'dracula t)

;; add line numbers
(global-linum-mode t)

;; add column numbers
(setq column-number-mode t)

;; fix for python indent bug
(add-hook 'python-mode-hook
  (lambda () (setq python-indent-offset 4)))

;; show paren matching
(show-paren-mode 1)
(setq show-paren-delay 0)
