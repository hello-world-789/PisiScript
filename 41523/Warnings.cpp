#include <windows.h>
int main() {
      int result = MessageBoxW(NULL, L"Warning", L"Warning", MB_YESNO);
      if (result == IDYES) {
        int result2 = MessageBoxW(NULL, L"Last Warning", L"Last Warning", MB_YESNO);
        if (result2 == IDYES) {
          //Your script
        } else if (result2 == IDNO) {
          return 0;
        }
      } else if (result == IDNO) {
        return 0;
      }
    return 0;
}
