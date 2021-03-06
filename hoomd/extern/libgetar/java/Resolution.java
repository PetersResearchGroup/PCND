/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package libgetar_wrap;

public final class Resolution {
  public final static Resolution Text = new Resolution("Text");
  public final static Resolution Uniform = new Resolution("Uniform");
  public final static Resolution Individual = new Resolution("Individual");

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static Resolution swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + Resolution.class + " with value " + swigValue);
  }

  private Resolution(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private Resolution(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private Resolution(String swigName, Resolution swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static Resolution[] swigValues = { Text, Uniform, Individual };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

