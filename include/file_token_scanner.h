#ifndef GHERKIN_FILE_TOKEN_SCANNER_H_
#define GHERKIN_FILE_TOKEN_SCANNER_H_

#include <wchar.h>

#include "gherkin-c-port.h"
#include "token_scanner.h"

#ifdef __cplusplus
extern "C" {
#endif

GHERKIN_C_API_ TokenScanner* FileTokenScanner_new(const char* const file_name);

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_FILE_TOKEN_SCANNER_H_ */
