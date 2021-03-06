#include "glut.h"
#include "glig.h"
#include "grandstand.h"

//Step of grandstand with walls
void grandstandStep(float p0[3], float p1[3], float p2[3], float p3[3], float p4[3], float p5[3], float p6[3], float p7[3])
{
		glBegin(GL_QUADS);
		glColor3f(0.0, 0.5, 0.0, 1.0);
		//BACK
		glNormal3f(0.0f, 0.0f, -1.0f);
		glTexCoord2d(0, 0);
		glVertex3fv(p0);
		glTexCoord2d(0, -1);
		glVertex3fv(p1);
		glTexCoord2d(-1, -1);
		glVertex3fv(p2);
		glTexCoord2d(-1, 0);
		glVertex3fv(p3);

		//RIGHT
		glNormal3f(1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(p3);
		glTexCoord2d(-1, -1);
		glVertex3fv(p2);
		glTexCoord2d(0, -1);
		glVertex3fv(p6);
		glTexCoord2d(0, 0);
		glVertex3fv(p7);

		//LEFT
		glNormal3f(-1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(p4);
		glTexCoord2d(-1, -1);
		glVertex3fv(p5);
		glTexCoord2d(0, -1);
		glVertex3fv(p1);
		glTexCoord2d(0, 0);
		glVertex3fv(p0);

		//FRONT
		glNormal3f(0.0f, 0.0f, 1.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(p7);
		glTexCoord2d(-1, -1);
		glVertex3fv(p6);
		glTexCoord2d(0, -1);
		glVertex3fv(p5);
		glTexCoord2d(0, 0);
		glVertex3fv(p4);

		//TOP
		glNormal3f(0.0f, 1.0f, 0.0f);
		glTexCoord2d(0, -1);
		glVertex3fv(p1);
		glTexCoord2d(0, 0);
		glVertex3fv(p5);
		glTexCoord2d(-1, 0);
		glVertex3fv(p6);
		glTexCoord2d(-1, -1);
		glVertex3fv(p2);

		//BOTTOM
		glNormal3f(0.0f, -1.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(p3);
		glTexCoord2d(-1, -1);
		glVertex3fv(p7);
		glTexCoord2d(0, -1);
		glVertex3fv(p4);
		glTexCoord2d(0, 0);
		glVertex3fv(p0);

		//LEFT WALL

		glColor3f(1.0, 1.0, 0.0, 1.0);

		float left0[3] = { p0[0] - 0.1, p0[1], p0[2] };
		float left1[3] = { p1[0] - 0.1, p1[1] + 0.7, p1[2] };
		float left2[3] = { p1[0], p1[1] + 0.7, p1[2] };
		float left3[3] = { p0[0], p0[1], p0[2] };
		float left4[3] = { p4[0] - 0.1, p4[1], p4[2] };
		float left5[3] = { p5[0] - 0.1, p5[1] + 0.5, p5[2] };
		float left6[3] = { p5[0], p5[1] + 0.5, p5[2] };
		float left7[3] = { p4[0], p4[1], p4[2] };

		//BACK
		glNormal3f(0.0f, 0.0f, -1.0f);
		glTexCoord2d(0, 0);
		glVertex3fv(left0);
		glTexCoord2d(0, -1);
		glVertex3fv(left1);
		glTexCoord2d(-1, -1);
		glVertex3fv(left2);
		glTexCoord2d(-1, 0);
		glVertex3fv(left3);

		//RIGHT
		glNormal3f(1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(left3);
		glTexCoord2d(-1, -1);
		glVertex3fv(left2);
		glTexCoord2d(0, -1);
		glVertex3fv(left6);
		glTexCoord2d(0, 0);
		glVertex3fv(left7);

		//LEFT
		glNormal3f(-1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(left4);
		glTexCoord2d(-1, -1);
		glVertex3fv(left5);
		glTexCoord2d(0, -1);
		glVertex3fv(left1);
		glTexCoord2d(0, 0);
		glVertex3fv(left0);

		//FRONT
		glNormal3f(0.0f, 0.0f, 1.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(left7);
		glTexCoord2d(-1, -1);
		glVertex3fv(left6);
		glTexCoord2d(0, -1);
		glVertex3fv(left5);
		glTexCoord2d(0, 0);
		glVertex3fv(left4);

		//TOP
		glNormal3f(0.0f, 1.0f, 0.0f);
		glTexCoord2d(0, -1);
		glVertex3fv(left1);
		glTexCoord2d(0, 0);
		glVertex3fv(left5);
		glTexCoord2d(-1, 0);
		glVertex3fv(left6);
		glTexCoord2d(-1, -1);
		glVertex3fv(left2);

		//BOTTOM
		glNormal3f(0.0f, -1.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(left3);
		glTexCoord2d(-1, -1);
		glVertex3fv(left7);
		glTexCoord2d(0, -1);
		glVertex3fv(left4);
		glTexCoord2d(0, 0);
		glVertex3fv(left0);

		//RIGHT WALL
		
		float right0[3] = { p3[0], p3[1], p3[2] };
		float right1[3] = { p2[0], p2[1] + 0.7, p2[2] };
		float right2[3] = { p2[0] + 0.1, p2[1] + 0.7, p2[2] };
		float right3[3] = { p3[0] + 0.1, p3[1], p3[2] };
		float right4[3] = { p7[0], p7[1], p7[2] };
		float right5[3] = { p6[0], p6[1] + 0.5, p6[2] };
		float right6[3] = { p6[0] + 0.1, p6[1] + 0.5, p6[2] };
		float right7[3] = { p7[0] + 0.1, p7[1], p7[2] };

		//BACK
		glNormal3f(0.0f, 0.0f, -1.0f);
		glTexCoord2d(0, 0);
		glVertex3fv(right0);
		glTexCoord2d(0, -1);
		glVertex3fv(right1);
		glTexCoord2d(-1, -1);
		glVertex3fv(right2);
		glTexCoord2d(-1, 0);
		glVertex3fv(right3);

		//RIGHT
		glNormal3f(1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(right3);
		glTexCoord2d(-1, -1);
		glVertex3fv(right2);
		glTexCoord2d(0, -1);
		glVertex3fv(right6);
		glTexCoord2d(0, 0);
		glVertex3fv(right7);

		//LEFT
		glNormal3f(-1.0f, 0.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(right4);
		glTexCoord2d(-1, -1);
		glVertex3fv(right5);
		glTexCoord2d(0, -1);
		glVertex3fv(right1);
		glTexCoord2d(0, 0);
		glVertex3fv(right0);

		//FRONT
		glNormal3f(0.0f, 0.0f, 1.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(right7);
		glTexCoord2d(-1, -1);
		glVertex3fv(right6);
		glTexCoord2d(0, -1);
		glVertex3fv(right5);
		glTexCoord2d(0, 0);
		glVertex3fv(right4);

		//TOP
		glNormal3f(0.0f, 1.0f, 0.0f);
		glTexCoord2d(0, -1);
		glVertex3fv(right1);
		glTexCoord2d(0, 0);
		glVertex3fv(right5);
		glTexCoord2d(-1, 0);
		glVertex3fv(right6);
		glTexCoord2d(-1, -1);
		glVertex3fv(right2);

		//BOTTOM
		glNormal3f(0.0f, -1.0f, 0.0f);
		glTexCoord2d(-1, 0);
		glVertex3fv(right3);
		glTexCoord2d(-1, -1);
		glVertex3fv(right7);
		glTexCoord2d(0, -1);
		glVertex3fv(right4);
		glTexCoord2d(0, 0);
		glVertex3fv(right0);

		glEnd();
}


//Looping the steps to build the grandstand
void stadiumGrandstands(void)
{
	float p0[3] = { -3.85f, -0.25f, -0.5f };
	float p1[3] = { -3.85f, -0.05f, -0.5f };
	float p2[3] = { 3.85f, -0.05f, -0.5f };
	float p3[3] = { 3.85f, -0.25f, -0.5f };
	float p4[3] = { -3.4f, -0.25f, 0.0f };
	float p5[3] = { -3.4f, -0.05f, 0.0f };
	float p6[3] = { 3.4f, -0.05f, 0.0f };
	float p7[3] = { 3.4f, -0.25f, 0.0f };

		for (int i = 1; i < 36; i++) 
		{
			grandstandStep(p0, p1, p2, p3, p4, p5, p6, p7);
			p0[0] -= 0.45;
			p0[2] -= 0.5;
			p1[0] -= 0.45;
			p1[1] += 0.2;
			p1[2] -= 0.5;
			p2[0] += 0.45;
			p2[1] += 0.2;
			p2[2] -= 0.5;
			p3[0] += 0.45;
			p3[2] -= 0.5;
			p4[0] -= 0.45;
			p4[2] -= 0.5;
			p5[0] -= 0.45;
			p5[1] += 0.2;
			p5[2] -= 0.5;
			p6[0] += 0.45;
			p6[1] += 0.2;
			p6[2] -= 0.5;
			p7[0] += 0.45;
			p7[2] -= 0.5;
		}
}

//place 4 grandstands in the plane
void placeGrandstands(void)
{
	pgrandstands = glGenLists(1);
	if (pgrandstands != 0)
	{
		glNewList(pgrandstands, GL_COMPILE);
		//back
		glPushMatrix();
			glTranslatef(0.0, 0.0, -3.75);
			stadiumGrandstands();
		glPopMatrix();

		//front
		glPushMatrix();
			glTranslatef(0.0, 0.0, 3.75);
			glRotatef(180.0, 0.0, 1.0, 0.0);
			stadiumGrandstands();
		glPopMatrix();

		//right
		glPushMatrix();
			glTranslatef(3.75, 0.0, 0.0);
			glRotatef(-90.0, 0.0, 1.0, 0.0);
			stadiumGrandstands();
		glPopMatrix();

		//left
		glPushMatrix();
		glTranslatef(-3.75, 0.0, 0.0);
		glRotatef(90.0, 0.0, 1.0, 0.0);
		stadiumGrandstands();
		glPopMatrix();

		glEndList();
	}
}

//seat of grandstands
void seat(void)
{
		glPushMatrix();
			glScalef(0.25, 0.02, 0.15);
			glColor3f(0.0, 1.0, 1.0, 1.0);
			igSolidCubo();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0, 0.0, 0.08);
			glScalef(0.125, 0.02, 0.05);
			glColor3f(0.0, 1.0, 1.0, 1.0);
			igSolidSemiSphere(10, 10);
		glPopMatrix();
		//backrest
		glPushMatrix();
			glTranslatef(0.0, 0.08 ,-0.065);
			glScalef(0.25, 0.15, 0.02);
			glColor3f(0.0, 1.0, 1.0, 1.0);
			igSolidCubo();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0, 0.15, -0.065);
			glScalef(0.125, 0.05, 0.02);
			glColor3f(0.0, 1.0, 1.0, 1.0);
			igSolidSemiSphere(10, 10);
		glPopMatrix();
}

//Looping seats to place them along the 4 grandstands
void grandstandSeats(void)
{
	gseats = glGenLists(1);
	if (gseats != 0)
	{
		glNewList(gseats, GL_COMPILE);

		//back
		float x_pos = -3.15;
		float y_pos = -0.05;
		float z_pos = -3.75;
		float min = -3.15;
		float max = 3.15;
		float length = 3.85;

		for (int i = 1; i < 36; i++)
		{
			//row 12 and 24 without seats
			if (i != 12 && i!=24)
			{
				while (x_pos < max)
				{
					//columns at points -3.15, 0.0 and 3.15 with stairs instead of seats
					if ((x_pos < -0.30 || x_pos > 0.30) && (x_pos < -3.45 || x_pos > -2.85) && (x_pos < 2.85 || x_pos > 3.45))
					{
						glPushMatrix();
						glTranslatef(x_pos, y_pos, z_pos);
						seat();
						glPopMatrix();
					}
					else
					{
						//grandstandStairs
						glPushMatrix();
						glTranslatef(x_pos, y_pos + 0.05, z_pos - 0.375);
						glScalef(0.25, 0.1, 0.25);
						glColor3f(0.0f, 1.0f, 0.0f, 1.0f);
						igSolidCubo();
						glPopMatrix();
					}

					x_pos += 0.35;
				}
			}

			//if there are space for two seats more in each side
			if (length + min > 0.9)
			{
				min -= 0.7;
				max += 0.7;
			}
			//if there are space for one seat more in each side
			else if (length + min > 0.6)
			{
				min -= 0.35;
				max += 0.35;
			}
			
			x_pos = min;
			y_pos += 0.2;
			z_pos -= 0.5;
			length += 0.45;
		}

		/*//front
		x_pos = -3.15;
		y_pos = -0.05;
		z_pos = 3.75;
		min = -3.15;
		max = 3.15;
		
		for (int i = 1; i < 36; i++)
		{
			while (x_pos < max)
			{
				glPushMatrix();
					glTranslatef(x_pos, y_pos, z_pos);
					glRotatef(180.0, 0.0, 1.0, 0.0);
					seat();
				glPopMatrix();

				x_pos += 0.35;
			}
			min -= 0.45;
			x_pos = min;
			y_pos += 0.2;
			z_pos += 0.5;
			max += 0.45;
		}

		//left
		x_pos = -3.75;
		y_pos = -0.05;
		z_pos = -3.15;
		min = -3.15;
		max = 3.15;

		for (int i = 1; i < 36; i++)
		{
			while (z_pos < max)
			{
				glPushMatrix();
				glTranslatef(x_pos, y_pos, z_pos);
				glRotatef(90.0, 0.0, 1.0, 0.0);
				seat();
				glPopMatrix();

				z_pos += 0.35;
			}
			min -= 0.45;
			z_pos = min;
			y_pos += 0.2;
			x_pos -= 0.5;
			max += 0.45;
		}

		//right
		x_pos = 3.75;
		y_pos = -0.05;
		z_pos = -3.15;
		min = -3.15;
		max = 3.15;

		for (int i = 1; i < 36; i++)
		{
			while (z_pos < max)
			{
				glPushMatrix();
				glTranslatef(x_pos, y_pos, z_pos);
				glRotatef(-90.0, 0.0, 1.0, 0.0);
				seat();
				glPopMatrix();

				z_pos += 0.35;
			}
			min -= 0.45;
			z_pos = min;
			y_pos += 0.2;
			x_pos += 0.5;
			max += 0.45;
		}*/

		glEndList();
	}
}
