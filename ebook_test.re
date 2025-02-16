= Start


//listnum[example][example.cpp]{
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 本を表現するクラス
class Book {
private:
    string title;
    string author;
    string isbn;
    bool isAvailable;

public:
    // コンストラクタ
    Book(string t, string a, string i) 
        : title(t), author(a), isbn(i), isAvailable(true) {}

    // ゲッターメソッド
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return isbn; }
    bool getAvailability() const { return isAvailable; }

// 図書館を管理するクラス
class Library {
private:
    vector<Book> books;

public:
    // 本を追加するメソッド
    void addBook(const string& title, const string& author, const string& isbn) {
        books.emplace_back(title, author, isbn);
        cout << "本が追加されました。" << endl;
    }
};

// メイン関数
int main() {
    Library library;
    string title, author, isbn;
    int choice;

    while (true) {
        cout << "\n図書館管理システム" << endl;
        cout << "1. 本を追加" << endl;
        cout << "2. 全ての本を表示" << endl;
        cout << "3. タイトルで検索" << endl;
        cout << "4. 終了" << endl;
        cout << "選択してください (1-4): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "タイトル: ";
                getline(cin, title);
                cout << "著者: ";
                getline(cin, author);
                cout << "ISBN: ";
                getline(cin, isbn);
                library.addBook(title, author, isbn);
                break;
            case 2:
                library.displayAllBooks();
                break;
            case 3:
                cout << "検索するタイトル: ";
                getline(cin, title);
                library.searchByTitle(title);
                break;
            case 4:
                cout << "プログラムを終了します。" << endl;
                return 0;
            default:
                cout << "無効な選択です。" << endl;
        }
    }
    return 0;
}

//}



