package com.example.aleksandra.jakdojade;

import android.content.Context;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import android.view.inputmethod.EditorInfo;
import android.widget.ArrayAdapter;
import android.widget.AutoCompleteTextView;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    String Start, Stop;
    String [] Bus_stops;
    AutoCompleteTextView textViewStart, textViewStop;
    EditText editTextStart, editTextStop;
    Context context;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Bus_stops = getResources().getStringArray(R.array.bus_stops);

        textViewStart = (AutoCompleteTextView) findViewById(R.id.bus_start);
        ArrayAdapter<String> adapterStart = new ArrayAdapter<String>(this, android.R.layout.simple_dropdown_item_1line, Bus_stops);
        textViewStart.setThreshold(2);
        textViewStart.setAdapter(adapterStart);

        textViewStop = (AutoCompleteTextView) findViewById(R.id.bus_stop);
        ArrayAdapter<String> adapterStop = new ArrayAdapter<String>(this, android.R.layout.simple_dropdown_item_1line, Bus_stops);
        textViewStop.setThreshold(2);
        textViewStop.setAdapter(adapterStop);


        editTextStart = (EditText) findViewById(R.id.bus_start);
        editTextStart.setOnEditorActionListener(new TextView.OnEditorActionListener() {
            @Override
            public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
                boolean handled = false;
                if (actionId == EditorInfo.IME_ACTION_SEND) {
                    handled = true;
                }
                Start = editTextStart.getText().toString();
                Toast.makeText(MainActivity.this, Start, Toast.LENGTH_SHORT).show();
                return handled;
            }
        });

        editTextStop = (EditText) findViewById(R.id.bus_stop);
        editTextStop.setOnEditorActionListener(new TextView.OnEditorActionListener() {
            @Override
            public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
                boolean handled = false;
                if (actionId == EditorInfo.IME_ACTION_SEND) {
                    handled = true;
                }
                Stop = editTextStop.getText().toString();
                Toast.makeText(MainActivity.this, Stop, Toast.LENGTH_SHORT).show();
                return handled;
            }
        });

    }

    public void Wyszukaj(View view) {
        Toast.makeText(MainActivity.this, "No hejo!!!", Toast.LENGTH_SHORT).show();
        context = getApplicationContext();
        Intent intent = new Intent(context, Trasa.class);
        startActivity(intent);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

}
