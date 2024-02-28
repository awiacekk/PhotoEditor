//
// Created by alla on 19.06.2021.
//

#ifndef UNTITLED1_GETFILENAMETOSAVE_H
#define UNTITLED1_GETFILENAMETOSAVE_H
bool GetFilenameToSave(char szFileName[]){
    OPENFILENAME ofn;
    char fileName[MAX_PATH] = "";
    ZeroMemory(&ofn, sizeof(ofn));

    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = NULL;
    ofn.lpstrFilter = "PNG Files (*.png)\0*.png\0All Files (*.*)\0*.*\0";
    ofn.lpstrFile = szFileName;
    ofn.nMaxFile = MAX_PATH;
    ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
    ofn.lpstrDefExt = "png";

    return GetSaveFileName(&ofn);
}
#endif //UNTITLED1_GETFILENAMETOSAVE_H
