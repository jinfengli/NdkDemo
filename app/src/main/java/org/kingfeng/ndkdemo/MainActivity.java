package org.kingfeng.ndkdemo;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

/**
 * created by kingfeng in 2016/4/1
 */
public class MainActivity extends Activity {

    static {
        System.loadLibrary("JniTest");
    }

    public native String getStringFromNative();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tvTestJni = (TextView) findViewById(R.id.tv_test_jni);
        tvTestJni.setText(getStringFromNative());
    }

}
