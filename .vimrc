" Plugins will be downloaded under the specified directory.
call plug#begin(has('nvim') ? stdpath('data') . '/plugged' : '~/.vim/plugged')

" Declare the list of plugins.
Plug 'dylanaraps/wal.vim'
Plug 'mattn/emmet-vim'
Plug 'sukima/xmledit'
" List ends here. Plugins become visible to Vim after this call.
call plug#end()


syntax on
colorscheme wal
