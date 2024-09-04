//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//    extern void mem_free(const char* destination, int N);  // Sets N bytes of memory at destination to 0
//
//#ifdef __cplusplus
//}
//#endif
//
//
//// Compare password from CSV file
//// Returns 1 if password is correct, 0 otherwise
//int compare_password(const char* userid, const char* passcode) {
//
//    // Open CSV file for reading
//    FILE* file = fopen("passcode.csv", "r");
//    if (file == NULL) {
//        // Handle file opening error
//        fprintf(stderr, "Error opening file!\n");
//        return 0;
//    }
//
//    // Skip header line
//    char line[100];
//    fgets(line, sizeof(line), file);
//
//    // Search for user ID in CSV file
//    int user_found = 0;
//    while (fgets(line, sizeof(line), file)) {
//        
//        // Extract user ID and password from line
//        char* context;
//        char* token = strtok_s(line, ",", &context);
//        
//        if (token && strcmp(token, userid) == 0) {
//            user_found = 1;
//            token = strtok_s(NULL, ",", &context);
//            if (token) {
//                // Remove newline character from password
//                token[strcspn(token, "\n")] = 0;
//                // Compare passwords
//                if (strcmp(token, passcode) == 0) {
//                    fclose(file);
//                    return 1; // Password is correct
//                }
//            }
//        }
//    }
//
//    // Close file and handle user not found error
//    fclose(file);
//    if (!user_found) {
//        fprintf(stderr, "User not found!\n");
//    }
//    return 0;
//}
//
//// Compare password from CSV file
//// Returns 1 if password is correct, 0 otherwise
//int compare_password_f(const char* userid, const char* passcode) {
//
//    // Open CSV file for reading
//    FILE* file = fopen("passcode.csv", "r");
//    if (file == NULL) {
//        // Handle file opening error
//        fprintf(stderr, "Error opening file!\n");
//        return 0;
//    }
//
//    // Skip header line
//    char* line = (char*)malloc(100 * sizeof(char));
//    fgets(line, 100, file);
//
//    char* context = (char*)malloc(100 * sizeof(char));
//
//    // Search for user ID in CSV file
//    int user_found = 0;
//    while (fgets(line, 100, file)) {
//
//        // Extract user ID and password from line
//        char* token = strtok_s(line, ",", &context);
//
//        if (token && strcmp(token, userid) == 0) {
//            user_found = 1;
//            token = strtok_s(NULL, ",", &context);
//            if (token) {
//                // Remove newline character from password
//                token[strcspn(token, "\n")] = 0;
//                // Compare passwords
//                if (strcmp(token, passcode) == 0) {
//                    free(line);
//                    fclose(file);
//                    return 1; // Password is correct
//                }
//            }
//        }
//    }
//
//    // Close file and handle user not found error
//    free(line);
//    fclose(file);
//    if (!user_found) {
//        fprintf(stderr, "User not found!\n");
//    }
//    return 0;
//}
//
//// Compare password from CSV file
//// Returns 1 if password is correct, 0 otherwise
//int compare_password_mem(const char* userid, const char* passcode) {
//
//    // Open CSV file for reading
//    FILE* file = fopen("passcode.csv", "r");
//    if (file == NULL) {
//        // Handle file opening error
//        fprintf(stderr, "Error opening file!\n");
//        return 0;
//    }
//
//    // Skip header line
//    char line[100];
//    fgets(line, sizeof(line), file);
//
//    // Search for user ID in CSV file
//    int user_found = 0;
//    while (fgets(line, sizeof(line), file)) {
//
//        // Extract user ID and password from line
//        char* context;
//        char* token = strtok_s(line, ",", &context);
//
//        if (token && strcmp(token, userid) == 0) {
//            user_found = 1;
//            token = strtok_s(NULL, ",", &context);
//            if (token) {
//                // Remove newline character from password
//                token[strcspn(token, "\n")] = 0;
//                // Compare passwords
//                if (strcmp(token, passcode) == 0) {
//                    fclose(file);
//
//                    mem_free(line, 100);
//
//                    return 1; // Password is correct
//                }
//            }
//        }
//    }
//
//    // Close file and handle user not found error
//    fclose(file);
//    
//    mem_free(line, 100);
//
//    if (!user_found) {
//        fprintf(stderr, "User not found!\n");
//    }
//    return 0;
//}
//
//
//// Login function
//void login() {
//
//    // Get user ID from user
//    char userid[10];
//    printf("Enter User ID: ");
//    fgets(userid, sizeof(userid), stdin);
//    userid[strcspn(userid, "\n")] = 0;
//
//    // Get password from user without echoing
//    char passcode[10];
//    printf("Enter Passcode: ");
//    int i = 0;
//    while (i < sizeof(passcode) - 1) {
//        char c = getch();
//        if (c == '\r') break;
//        passcode[i++] = c;
//        printf("*");
//    }
//    passcode[i] = '\0';
//
//    // Compare password and handle result without free
//    if (compare_password_mem(userid, passcode)) {
//        printf("\n\nSuccessful LogIn!\n");
//    }
//    else {
//        printf("\n\nAccess denied!\n");
//    }
//
//    //// Compare password and handle result with free
//    //if (compare_password_f(userid, passcode)) {
//    //    printf("\n\nSuccessful LogIn!\n");
//    //}
//    //else {
//    //    printf("\n\nAccess denied!\n");
//    //}
//}
//
//int main() {
//
//    login();
//
//    while (1)
//    {
//        // Your Daily Work
//    }
//    
//    return EXIT_SUCCESS;
//}