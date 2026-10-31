#include <windows.h>
int main() {
      int result = MessageBoxW(NULL, L"Warning", L"Warning", MB_YESNO);
      if (result == ID_YES) {
        int result2 = MessageBoxW(NULL, L"Last Warning", L"Last Warning", MB_YESNO);
        if (result2 == ID_YES) {
          //Your script
        } else if (result2 == ID_NO) {
          break;
        }
      } else if (result = ID_NO) {
        break;
      }
    return 0;
}
