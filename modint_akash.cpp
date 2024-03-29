t e m p l a t e   < t y p e n a m e   T >  
 T   i n v e r s e ( T   a ,   T   m )   {  
     T   u   =   0 ,   v   =   1 ;  
     w h i l e   ( a   ! =   0 )   {  
         T   t   =   m   /   a ;  
         m   - =   t   *   a ;   s w a p ( a ,   m ) ;  
         u   - =   t   *   v ;   s w a p ( u ,   v ) ;  
     }  
     a s s e r t ( m   = =   1 ) ;  
     r e t u r n   u ;  
 }  
  
 c l a s s   m o d u l a r   {  
 p u b l i c :  
     s t a t i c   i n t   m o d ;  
     i n t   v a l ;  
     m o d u l a r ( )   {   v a l   =   0 ;   }  
     t e m p l a t e < t y p e n a m e   T >  
     m o d u l a r ( T   x )   {   v a l   =   n o r m a l i z e ( x ) ;   }  
     m o d u l a r &   o p e r a t o r   =   ( i n t   x )   {   * t h i s   =   m o d u l a r ( x ) ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   =   ( l o n g   l o n g   x )   {   * t h i s   =   m o d u l a r ( x ) ;   r e t u r n   * t h i s ;   }  
     t e m p l a t e < t y p e n a m e   T >  
     s t a t i c   i n t   n o r m a l i z e ( T   x )   {  
         i n t   v ;  
         i f   ( - m o d   < =   x   & &   x   <   m o d )   {   v   =   ( i n t )   x ;   }  
         e l s e   {   v   =   ( i n t )   ( x   %   m o d ) ;   }  
         i f   ( v   <   0 )   {   v   + =   m o d ;   }  
         r e t u r n   v ;  
     }  
     m o d u l a r   o p e r a t o r   ( ) ( )   {   r e t u r n   * t h i s ;   }  
     t e m p l a t e < t y p e n a m e   T >   T   o p e r a t o r   ( )   ( m o d u l a r   & o t h e r )   {   r e t u r n   o t h e r ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   +   ( T   o t h e r )   {   r e t u r n   m o d u l a r ( v a l   +   o t h e r ) ;   }  
     m o d u l a r   o p e r a t o r   +   ( m o d u l a r   & o t h e r )   {   r e t u r n   m o d u l a r ( v a l   +   o t h e r . v a l   -   m o d ) ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   -   ( T   o t h e r )   {   r e t u r n   m o d u l a r ( v a l   -   o t h e r ) ;   }  
     m o d u l a r   o p e r a t o r   -   ( m o d u l a r   & o t h e r )   {   r e t u r n   m o d u l a r ( v a l   -   o t h e r . v a l ) ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   *   ( T   o t h e r )   {   r e t u r n   m o d u l a r ( ( l o n g   l o n g )   v a l   *   o t h e r ) ;   }  
     m o d u l a r   o p e r a t o r   *   ( m o d u l a r   & o t h e r )   {   r e t u r n   m o d u l a r ( ( l o n g   l o n g )   v a l   *   o t h e r . v a l ) ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   /   ( T   o t h e r )   {   r e t u r n   m o d u l a r ( ( l o n g   l o n g )   v a l   *   i n v e r s e ( o t h e r ,   m o d ) ) ;   }  
     m o d u l a r   o p e r a t o r   /   ( m o d u l a r   & o t h e r )   {   r e t u r n   m o d u l a r ( ( l o n g   l o n g )   v a l   *   i n v e r s e ( o t h e r . v a l ,   m o d ) ) ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r &   o p e r a t o r   + =   ( T   o t h e r )   {   v a l   + =   o t h e r ;   v a l   =   m o d u l a r : : n o r m a l i z e ( v a l ) ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   + =   ( m o d u l a r   o t h e r )   {   v a l   + =   o t h e r . v a l ;   v a l   =   m o d u l a r : : n o r m a l i z e ( v a l ) ;   r e t u r n   * t h i s ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r &   o p e r a t o r   - =   ( T   o t h e r )   {   v a l   - =   o t h e r ;   v a l   =   m o d u l a r : : n o r m a l i z e ( v a l ) ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   - =   ( m o d u l a r   o t h e r )   {   v a l   - =   o t h e r . v a l ;   v a l   =   m o d u l a r : : n o r m a l i z e ( v a l ) ;   r e t u r n   * t h i s ;   }    
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r &   o p e r a t o r   * =   ( T   o t h e r )   {   * t h i s   =   * t h i s   *   o t h e r ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   * =   ( m o d u l a r   o t h e r )   {   * t h i s   =   * t h i s   *   o t h e r ;   r e t u r n   * t h i s ;   }  
     t e m p l a t e < t y p e n a m e   T >   m o d u l a r &   o p e r a t o r   / =   ( T   o t h e r )   {   * t h i s   =   * t h i s   /   o t h e r ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   / =   ( m o d u l a r   o t h e r )   {   * t h i s   =   * t h i s   /   o t h e r ;   r e t u r n   * t h i s ;   }  
     m o d u l a r &   o p e r a t o r   + + ( )   {   r e t u r n   * t h i s   + =   1 ;   }  
     m o d u l a r &   o p e r a t o r   - - ( )   {   r e t u r n   * t h i s   - =   1 ;   }  
     m o d u l a r   o p e r a t o r   + + ( i n t )   {   m o d u l a r   r e s   =   * t h i s ;   * t h i s   + =   1 ;   r e t u r n   r e s ;   }  
     m o d u l a r   o p e r a t o r   - - ( i n t )   {   m o d u l a r   r e s   =   * t h i s ;   * t h i s   - =   1 ;   r e t u r n   r e s ;   }  
     m o d u l a r   o p e r a t o r   - ( )   {   r e t u r n   m o d u l a r ( - v a l ) ;   }  
 } ;  
 b o o l   o p e r a t o r   = =   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s . v a l   = =   r h s . v a l ;   }  
 t e m p l a t e < t y p e n a m e   T >   b o o l   o p e r a t o r   = =   ( c o n s t   m o d u l a r   & l h s ,   T   r h s )   {   r e t u r n   l h s . v a l   = =   r h s ;   }  
 t e m p l a t e < t y p e n a m e   T >   b o o l   o p e r a t o r   = =   ( T   l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s   = =   r h s . v a l ;   }  
  
 b o o l   o p e r a t o r   ! =   ( c o n s t   m o d u l a r   & l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s . v a l   ! =   r h s . v a l ;   }  
 t e m p l a t e < t y p e n a m e   T >   b o o l   o p e r a t o r   ! =   ( c o n s t   m o d u l a r   & l h s ,   T   r h s )   {   r e t u r n   l h s . v a l   ! =   r h s ;   }  
 t e m p l a t e < t y p e n a m e   T >   b o o l   o p e r a t o r   ! =   ( T   l h s ,   c o n s t   m o d u l a r   & r h s )   {   r e t u r n   l h s   ! =   r h s . v a l ;   }  
  
 t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   +   ( c o n s t   T   l h s ,   m o d u l a r   r h s )   {   r e t u r n   m o d u l a r ( l h s )   +   r h s ;   }  
 t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   -   ( T   l h s ,   m o d u l a r   r h s )   {   r e t u r n   m o d u l a r ( l h s )   -   r h s ;   }    
 t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   *   ( T   l h s ,   m o d u l a r   r h s )   {   r e t u r n   m o d u l a r ( l h s )   *   r h s ;   }  
 t e m p l a t e < t y p e n a m e   T >   m o d u l a r   o p e r a t o r   /   ( T   l h s ,   m o d u l a r   r h s )   {   r e t u r n   m o d u l a r ( l h s )   /   r h s ;   }                                                                                                                      
  
 o s t r e a m   &   o p e r a t o r   < <   ( o s t r e a m   & o u t ,   m o d u l a r   n u m )   {  
     o u t   < <   n u m . v a l ;  
     n u m . v a l   =   m o d u l a r : : n o r m a l i z e ( n u m . v a l ) ;  
     r e t u r n   o u t ;  
 }                                                                        
 i s t r e a m   &   o p e r a t o r   > >   ( i s t r e a m   & i n ,   m o d u l a r   & n u m )   {    
     i n t   t m p ;  
     i n   > >   t m p ;  
     n u m . v a l   =   m o d u l a r : : n o r m a l i z e ( t m p ) ;  
     r e t u r n   i n ;  
 }  
  
 i n t   m o d u l a r : : m o d   =   1 0 0 0 0 0 0 0 0 7 ;  
 u s i n g   m i n t   =   m o d u l a r ;  
  
 v e c t o r < m i n t >   f a c ( 1 ,   1 ) ;  
 v e c t o r < m i n t >   i n v _ f a c ( 1 ,   1 ) ;  
  
 m i n t   C ( i n t   n ,   i n t   k )   {  
     i f   ( k   <   0   | |   k   >   n )   {  
         r e t u r n   0 ;  
     }  
     w h i l e   ( ( i n t )   f a c . s i z e ( )   <   n   +   1 )   {  
         f a c . p u s h _ b a c k ( f a c . b a c k ( )   *   ( i n t )   f a c . s i z e ( ) ) ;  
         i n v _ f a c . p u s h _ b a c k ( 1   /   f a c . b a c k ( ) ) ;  
     }  
     r e t u r n   f a c [ n ]   *   i n v _ f a c [ k ]   *   i n v _ f a c [ n   -   k ] ;  
 }  
  
 t e m p l a t e < t y p e n a m e   T ,   t y p e n a m e   U >  
 m o d u l a r   p o w e r ( c o n s t   T   a ,   c o n s t   U   b )   {  
     a s s e r t ( b   > =   0 ) ;  
     m i n t   x   =   a ,   r e s   =   1 ;  
     U   p   =   b ;  
     w h i l e   ( p   >   0 )   {  
         i f   ( p   &   1 )   r e s   * =   x ;  
         x   * =   x ;  
         p   > > =   1 ;  
     }  
     r e t u r n   r e s ;  
 }  
 t e m p l a t e < t y p e n a m e   U >  
 m o d u l a r   p o w e r ( m o d u l a r   & a ,   c o n s t   U   b )   {  
     a s s e r t ( b   > =   0 ) ;  
     m i n t   x   =   a ,   r e s   =   1 ;  
     U   p   =   b ;  
     w h i l e   ( p   >   0 )   {  
         i f   ( p   &   1 )   r e s   * =   x ;  
         x   * =   x ;  
         p   > > =   1 ;  
     }  
     r e t u r n   r e s ;  
 } 