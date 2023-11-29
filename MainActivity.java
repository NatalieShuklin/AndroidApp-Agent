package com.example.nso_project;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.example.nso_project.databinding.ActivityMainBinding;
import android.view.View;
import android.widget.Button;
public class MainActivity extends AppCompatActivity implements View.OnClickListener  {

    // Used to load the 'nso_project' library on application startup.
    static {
        System.loadLibrary("nso_project");
        System.loadLibrary("hello");
    }


    private ActivityMainBinding binding;
    Button load, unload;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        load= findViewById(R.id.loadbutton);
        unload = findViewById(R.id.unloadbutton);

        load.setOnClickListener(this);
        unload.setOnClickListener(this);

    }

    @Override
    public void onClick(View view) {

        if (view.getId() == R.id.loadbutton) {
            Utility util = new Utility();
            util.loadLib("hello");
        }
        if (view.getId() == R.id.unloadbutton) {
            Utility util2 = new Utility();
            util2.unloadLib("hello");
        }
    }

}