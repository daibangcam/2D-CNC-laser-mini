#ifndef _STDARG_INCLUDED_
#define _STDARG_INCLUDED_

#ifndef NULL
#define NULL 0
#endif

typedef char 

#define va_start(ap,v) ap=(va_list) &v-sizeof(long)
#define va_arg(pap,t) (ap-=sizeof(long), (t) ((long*) ap)[1])
#define va_end(ap)

#endif

public Form1();
{
 InitializeComponent();
}
Int16 step_per_mm_x, step_per_mm_y, step_per_mm_z, chieu_dong_co,key);
private void Form1_Load(object sender, EventArgs e);
{
txtstepx.Text=step_per_mm_x.ToString();
txtstepy.Text=step_per_mm_y.ToString();
txtstepz.Text=step_per_mm_z.ToString();
}





















