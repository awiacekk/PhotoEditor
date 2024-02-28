//
// Created by alla on 19.06.2021.
//

#ifndef UNTITLED1_OPENFILEDIALOG_H
#define UNTITLED1_OPENFILEDIALOG_H
bool OpenFileDialog(char fileName[]){

    OPENFILENAME ofn;
    const char* FilterSpec = "JPG Files(*.jpg)\0*.jpg\0PNG Files(*.png)\0*.png\0All Files(.)\0*.*\0";
    const char* Title = "Open image....";

    char szFileTitle[MAX_PATH] = "";

    *fileName = 0;

    ofn.lStructSize = sizeof(OPENFILENAME);
    ofn.hwndOwner = GetFocus();
    ofn.lpstrFilter = FilterSpec;
    ofn.lpstrCustomFilter = NULL;
    ofn.nMaxCustFilter = 0;
    ofn.nFilterIndex = 0;
    ofn.lpstrFile = fileName;
    ofn.nMaxFile = MAX_PATH;
    ofn.lpstrInitialDir = ".";
    ofn.lpstrFileTitle = szFileTitle;
    ofn.nMaxFileTitle = MAX_PATH;
    ofn.lpstrTitle = Title;
    ofn.lpstrDefExt = 0;
    ofn.Flags = OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;

    return GetOpenFileName(&ofn);
}
#endif //UNTITLED1_OPENFILEDIALOG_H
