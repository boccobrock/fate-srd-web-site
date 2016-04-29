/**
 * @file
 * Nav accordian.
 *
 * @author Randy Oest
 */

/* globals jQuery, Drupal */
'use strict';

(function ($, Drupal) {
  Drupal.behaviors.fateNav = {
    attach: function (context) {
      var menus = $('.pane-menu-tree', context),
          headers = $('.pane-menu-tree .pane-title:not(.active-menu)');

      /**
       * Process menus so they are accordians.
       * @param  {jQuery} menus [The menus we process.]
       * @return null.
       */
      $(menus).each(function (){
        var $this = $(this);
        $this.children('.active-trail').addClass('active-menu');

        if ($this.find('.active-trail').length > 0) {
          $this.addClass('menu-open').find('.pane-title').addClass('active-menu');
        } else {
          $this.addClass('menu-closed');
        }
      });

      /**
       * Headers will toggle menus.
       * @param  {jQuery} headers [The main headers for each menu.]
       * @return null
       */
      $(headers).on('click',function () {
        $(this).parents('.pane-menu-tree').toggleClass('menu-open menu-closed');
      });

      /**
       * Add menu controls.
       * @param  {jQuery} 'li.expanded' [All li > ul]
       * @return {null}
       */
      $('li.expanded').each(function (){
        if ($(this).hasClass('active-trail')) {
          $(this).children('a').after('<span class="menu-control menu-open"></span>');
        }
        else {
          $(this).children('a').after('<span class="menu-control menu-closed"></span>');
        }
        $(this).addClass('has-menu-control');
      });
      $('.menu-control').on('click', function (){
        $(this).toggleClass('menu-closed menu-open');
      });
    }
  };
})(jQuery, Drupal);
