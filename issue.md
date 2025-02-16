##  実行環境 

OS:Ubuntu 22.04.4 LTS
```
$ gem list review
review (5.10.0)
```

## 問題の内容

config.ymlで、電子書籍の設定(texdocumentclass: ["media=ebook"])にした場合、
media=ebookでlistの行数が長い場合に、
ページを跨ぐと、背景色がグレーから白に変化します。

印刷(texdocumentclass: ["media=paper"])と設定した場合、
media=ebookでlistの行数が長い場合に、
ページを跨いでも、背景色がグレーから変化せず、問題は起きません。

![Image](https://github.com/user-attachments/assets/0180132f-7a00-4dd5-8c03-0d1510bfc910)

 * 電子書籍の設定のPDFファイル
  https://github.com/nnn112358/review_list_test/blob/main/ebook_example.pdf
 * 印刷の設定のPDFファイル

### 再現のための前提条件 

 * config.ymlで電子書籍の設定(texdocumentclass: ["media=ebook"])にする
 * listの行数が長い場合(3ページ以上)


###  再現させるためのコード

こちらに掲載しました。
https://github.com/nnn112358/review_list_test/

