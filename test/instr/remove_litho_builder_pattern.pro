-dontshrink
-dontobfuscate

-keepnames class *

-keep class com.facebook.redex.test.instr.TestBuilder { *; }

# Don't muck with test infra

-keep class org.fest.** { *; }
-keep class org.junit.** { *; }
-keep class junit.** { *; }
-keep class sun.misc.** { *; }
-keep class android.test.** { *; }
-keep class android.support.test.** { *; }
-keep class androidx.test.** { *; }
