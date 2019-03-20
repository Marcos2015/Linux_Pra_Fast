set nu
set smartindent  "创建新行时使用智能缩进，主要用于 C 语言一类的程序
set tabstop=4    "设置文件里的制表符 (TAB) 的宽度（以空格的数量表示）
set shiftwidth=4 "设置移位操作 >> 或 << 的缩进长度（以空格的数量表示）
syntax on        "语法高亮
set cursorline              " 突出显示当前行
set ruler                   " 打开状态栏标尺
set shiftwidth=4            " 设定 << 和 >> 命令移动时的宽度为 4
set nobackup                " 覆盖文件时不备份
set autochdir               " 自动切换当前目录为当前文件所在的目录
set hlsearch                " 搜索时高亮显示被找到的文本
filetype plugin indent on   " 开启插件
set guioptions-=T           " 隐藏工具栏
set guioptions-=m           " 隐藏菜单栏

