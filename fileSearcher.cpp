#include"Header.h"



using namespace std;
using namespace ::filesystem;

fs::path wayToFile1{ "D:\\VS-studio\\test" };
fs::path wayToFile2{ "D:\\VS-studio\\bin" };
fs::path wayToFile3{ "D:\\VS-studio\\GameEngine" };
fs::path wayToFile4{ "D:\\VS-studio\\TEMP" };
fs::path wayToFile5{ "D:\\VS-studio\\overloading" };
const fs::path file_name = "lol.txt";

void FILE_SEARCHER::get_num_of_files_recursively_for(fs::path sub_dir) {
    int num = 0;

    if (fs::is_directory(sub_dir)) {
        for (fs::recursive_directory_iterator it(
            sub_dir, fs::directory_options::skip_permission_denied);
            it != fs::recursive_directory_iterator(); ++it) {
            num++;
        }
        cout << "Number of files in current directory: " << num << endl;
        cout << "----------------------------------" << endl;


        for (const auto& entry : fs::directory_iterator(sub_dir)) {

            std::cout << entry.path() << std::endl;
            cout << "------------------------------------" << endl;
        }
    }
    else {
        std::cout << "Entered path is not a directory ! \nPlease write the path one more time!" << endl;;

    }

}
void FILE_SEARCHER::ThreadSearch1() {
    using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;


    auto d = fs::directory_iterator(wayToFile1);
    //unique_lock<mutex> ul(mutex_process2);
    auto found = std::find_if(begin(d), end(d), [](const auto& dir_entry)
        {
            if (dir_entry.path().filename() == file_name) {
                cout << "in directory " << wayToFile2 << endl;
                //cv.notify_all();
            }

            return dir_entry.path().filename() == file_name;
        });


    if (found != end(d))
    {
        // we have found what we were looking for
        cout << "file was found by thread 2 ! " << endl << "The name of file is" << file_name << endl;
        if (path().filename() == file_name)
            cout << wayToFile1 << endl;

        std::this_thread::sleep_for(2s);
        cout << endl << "Counting amount of files in this current directory..." << endl << endl;
        std::this_thread::sleep_for(2s);
        get_num_of_files_recursively_for(wayToFile1);
    }

}

void FILE_SEARCHER::ThreadSearch2() {

    using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;


    auto d = fs::directory_iterator(wayToFile2);
    //unique_lock<mutex> ul(mutex_process2);
    auto found = std::find_if(begin(d), end(d), [](const auto& dir_entry)
        {
            if (dir_entry.path().filename() == file_name) {
                cout << "in directory " << wayToFile2 << endl;
                //cv.notify_all();
            }

            return dir_entry.path().filename() == file_name;
        });


    if (found != end(d))
    {
        // we have found what we were looking for
        cout << "file was found by thread 2 ! " << endl << "The name of file is" << file_name << endl;
        if (path().filename() == file_name)
            cout << wayToFile2 << endl;

        std::this_thread::sleep_for(2s);
        cout << endl << "Counting amount of files in this current directory..." << endl << endl;
        std::this_thread::sleep_for(2s);
        get_num_of_files_recursively_for(wayToFile2);
    }

}
void FILE_SEARCHER::ThreadSearch3() {
    using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;

    auto d = fs::directory_iterator(wayToFile3);
    //unique_lock<mutex> ul(mutex_process3);
    auto found = std::find_if(begin(d), end(d), [](const auto& dir_entry)
        {
            if (dir_entry.path().filename() == file_name) {
                cout << "in directory " << wayToFile3 << endl;
                //cv.notify_all();
            }

            return dir_entry.path().filename() == file_name;
        });

    if (found != end(d))
    {
        // we have found what we were looking for
        cout << "file was found by thread 3 ! " << endl << "The name of file is" << file_name << endl;
        if (path().filename() == file_name)
            cout << wayToFile3 << endl;

        std::this_thread::sleep_for(2s);
        cout << endl << "Counting amount of files in this current directory..." << endl << endl;
        std::this_thread::sleep_for(2s);
        get_num_of_files_recursively_for(wayToFile3);
    }

}

void FILE_SEARCHER::ThreadSearch4() {
    using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;


    auto d = fs::directory_iterator(wayToFile4);

    auto found = std::find_if(begin(d), end(d), [](const auto& dir_entry)
        {
            if (dir_entry.path().filename() == file_name) {
                cout << "in directory " << wayToFile4 << endl;
                //cv.notify_all();
            }

            return dir_entry.path().filename() == file_name;
        });

    if (found != end(d))
    {
        // we have found what we were looking for
        cout << "file was found by thread 4 ! " << endl << "The name of file is" << file_name << endl;
        if (path().filename() == file_name)
            cout << wayToFile4 << endl;

        std::this_thread::sleep_for(2s);
        cout << endl << "Counting amount of files in this current directory..." << endl << endl;
        std::this_thread::sleep_for(2s);
        get_num_of_files_recursively_for(wayToFile4);
    }

}
void FILE_SEARCHER::ThreadSearch5() {

    using recursive_directory_iterator = std::filesystem::recursive_directory_iterator;

    //unique_lock<mutex> ul(mutex_process5);
    auto d = fs::directory_iterator(wayToFile5);

    auto found = std::find_if(begin(d), end(d), [](const auto& dir_entry)
        {
            if (dir_entry.path().filename() == file_name) {
                cout << "in directory " << wayToFile5 << endl;
                //cv.notify_all();
            }
            return dir_entry.path().filename() == file_name;
        });

    if (found != end(d))
    {
        // we have found what we were looking for
        cout << "file was found by thread 5 ! " << endl << "The name of file is" << file_name << endl;
        if (path().filename() == file_name)
            cout << wayToFile5 << endl;
        std::this_thread::sleep_for(2s);

        cout << endl << "Counting amount of files in this current directory..." << endl << endl;
        std::this_thread::sleep_for(2s);
        get_num_of_files_recursively_for(wayToFile5);
    }

}
