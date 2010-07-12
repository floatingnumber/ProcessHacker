#ifndef _PH_HEXEDIT_H
#define _PH_HEXEDIT_H

#define PH_HEXEDIT_CLASSNAME L"PhHexEdit"

BOOLEAN PhHexEditInitialization();

#define HEM_SETBUFFER (WM_APP + 1401)
#define HEM_SETDATA (WM_APP + 1402)
#define HEM_GETBUFFER (WM_APP + 1403)

#define HexEdit_SetBuffer(hWnd, Buffer, Length) \
    SendMessage((hWnd), HEM_SETBUFFER, (WPARAM)(Length), (LPARAM)(Buffer))

#define HexEdit_SetData(hWnd, Buffer, Length) \
    SendMessage((hWnd), HEM_SETDATA, (WPARAM)(Length), (LPARAM)(Buffer))

#define HexEdit_GetBuffer(hWnd, Buffer, Length) \
    ((PUCHAR)SendMessage((hWnd), HEM_GETBUFFER, 0, 0)

#endif
