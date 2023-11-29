package com.example.nso_project;

public class Utility {
    static {
        System.loadLibrary("dynamicloader");
    }

    public native void loadLib(String lib_path);

    public native void unloadLib(String lib_path);

}
