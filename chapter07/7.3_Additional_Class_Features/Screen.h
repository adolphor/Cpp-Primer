
#include <string>
#include <iostream>

class Screen {

public:

    typedef std::string::size_type pos;

    // default constructor needed because Screen has another constructor
    Screen() : cursor(0), height(0), width(0) {}

    Screen(pos ht, pos wd, char c) : cursor(0), height(ht), width(wd), contents(ht * wd, c) {}

    friend class Window_mgr;

    Screen(pos ht = 0, pos wd = 0) : cursor(0), height(ht), width(wd), contents(ht * wd, ' ') {}

    char get() const {             // get the character at the cursor
      return contents[cursor];
    }       // implicitly inline

    inline char get(pos ht, pos wd) const; // explicitly inline
    Screen &clear(char = bkground);

private:

    static const char bkground = ' ';

public:
    Screen &move(pos r, pos c);      // can be made inline later
    Screen &set(char);

    Screen &set(pos, pos, char);

    // other members as before
    // display overloaded on whether the object is const or not
    Screen &display(std::ostream &os) {
      do_display(os);
      return *this;
    }

    const Screen &display(std::ostream &os) const {
      do_display(os);
      return *this;
    }

private:
    // function to do the work of displaying a Screen
    void do_display(std::ostream &os) const { os << contents; }

    pos cursor;
    pos height, width;
    std::string contents;
};

Screen &Screen::clear(char c) {
  contents = std::string(height * width, c);
  return *this;
}

inline                   // we can specify inline on the definition
Screen &Screen::move(pos r, pos c) {
  pos row = r * width; // compute the row location
  cursor = row + c;    // move cursor to the column within that row
  return *this;        // return this object as an lvalue
}

char Screen::get(pos r, pos c) const // declared as inline in the class
{
  pos row = r * width;      // compute row location
  return contents[row + c]; // return character at the given column
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c; // set the new value at the current cursor location
  return *this;         // return this object as an lvalue
}

inline Screen &Screen::set(pos r, pos col, char ch) {
  contents[r * width + col] = ch;  // set specified location to given value
  return *this;                  // return this object as an lvalue
}

